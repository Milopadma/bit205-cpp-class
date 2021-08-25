/*---------------PERSON FUNCTIONALITY----------------- */
function nextPerson() {
  let rPersonAPI = {};
  /* need to select results(array) from Object, deconstruct the returned json
and take name, email address, birthday etc. */
  fetch("https://randomuser.me/api/")
    .then(function (response) {
      return response.json();
    })
    .then(function (response) {
      rPersonAPI = response;
      var result = rPersonAPI.results;
      var gender = result.map((x) => x.gender)[0];
      var email = result.map((x) => x.email)[0];
      var phone = result.map((x) => x.phone)[0];

      var nameArr = result.map((x) => x.name);
      var firstName = nameArr.map((x) => x.first)[0];
      var titleName = nameArr.map((x) => x.title)[0];
      var lastName = nameArr.map((x) => x.last)[0];

      console.log(response, result);
      console.log(gender, titleName, firstName, lastName);
      changePerson(firstName, lastName, gender, phone, email);
    });
}

function changePerson(firstName, lastName, gender, phone, email) {
  var cardPerson = document.querySelector(".cardcontent");
  gender = gender.toUpperCase();
  cardPerson.innerText = `${firstName} ${lastName}, ${gender}, 
  PHONE: ${phone}, EMAIL: ${email}`;
}

/* TODO: fetch new person for other 2 cards */

/* JAVASCRIPT IS OBVIOUSLY YOUR WEAKNESS, GET BETTER AT THIS */

/*---------------BUTTON FUNCTIONALITY----------------- */
class actualModal {
  constructor() {
    /* initializing modal variable */
    this.modal1 = document.getElementById("oneModal");
    this.modal2 = document.getElementById("twoModal");
    this.modal3 = document.getElementById("thirdModal");
  }
  /* initializing open/close methods to call */
  openModal() {
    this.modal1.classList.add("active");
    this.modal2.classList.add("active");
    this.modal3.classList.add("active");
  }

  closeModal() {
    this.modal1.classList.remove("active");
    this.modal2.classList.remove("active");
    this.modal3.classList.remove("active");
  }
}

const modal = new actualModal();
/* button selectors */
const openModalbtn = document.querySelector(".buttonOpen");
const closeModalbtn = document.querySelector(".buttonClose");

/* to open the Modal, adds event listener to variable */
openModalbtn.addEventListener("click", function (event) {
  var modalToggle = new actualModal().modal1.classList.contains("active");
  if (modalToggle == false) {
    modal.openModal();
  } else {
    modal.closeModal();
  }
});

// document.querySelector(".buttonClose").addEventListener("click", function () {
//   modal.closeModal();
// });
